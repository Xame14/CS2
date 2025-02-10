
#include "pokemon.h"
#include <cstdlib>
#include <iostream>

using namespace std;

inline void _test(const char *expression, const char *file, int line) {
  cerr << "test(" << expression << ") failed in file " << file << ", line "
       << line << "." << endl;
  // abort();
}

#define test(EXPRESSION)                                                       \
  ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {
  // Create a bunch of pokemon objects.
  // (Data taken from the official list, plz don't sue me The Pokemon Company)
  Pokemon bouffalant("Bouffalant", 626, "Normal");
  Pokemon cinccino("Cinccino", 573, "Normal");

  Pokemon pidgey("Pidgey", 16, "Normal", "Flying");
  Pokemon fletchling("Fletchling", 661, "Normal", "Flying");
  Pokemon zubat("Zubat", 41, "Poison", "Flying");
  Pokemon toxicroak("Toxicroak", 454, "Poison", "Fighting");

  // Test name()
  test(bouffalant.name() == "Bouffalant");
  test(cinccino.name() == "Cinccino");
  test(pidgey.name() == "Pidgey");
  test(fletchling.name() == "Fletchling");
  test(zubat.name() == "Zubat");
  test(toxicroak.name() == "Toxicroak");

  // Test Ndex()
  test(bouffalant.Ndex() == 626);
  test(cinccino.Ndex() == 573);

  test(pidgey.Ndex() == 16);
  test(fletchling.Ndex() == 661);
  test(zubat.Ndex() == 41);
  test(toxicroak.Ndex() == 454);

  // Test is_multitype()
  test(!bouffalant.is_multitype());
  test(!cinccino.is_multitype());

  test(pidgey.is_multitype());
  test(fletchling.is_multitype());
  test(zubat.is_multitype());
  test(toxicroak.is_multitype());

  // Test type1()
  test(bouffalant.type1() == "Normal");
  test(cinccino.type1() == "Normal");

  test(pidgey.type1() == "Normal");
  test(fletchling.type1() == "Normal");
  test(zubat.type1() == "Poison");
  test(toxicroak.type1() == "Poison");

  // Test type2()
  test(bouffalant.type2() == "Normal");
  test(cinccino.type2() == "Normal");

  test(pidgey.type2() == "Flying");
  test(fletchling.type2() == "Flying");
  test(zubat.type2() == "Flying");
  test(toxicroak.type2() == "Fighting");

  // Test damage_multiplier() for single-type Pokemon
  test(bouffalant.damage_multiplier("Normal") == 1.0);
  test(bouffalant.damage_multiplier("Fighting") == 2.0);
  test(bouffalant.damage_multiplier("Flying") == 1.0);
  test(bouffalant.damage_multiplier("Poison") == 1.0);

  // Test damage_multiplier() for multitype Pokemon
  test(pidgey.damage_multiplier("Normal") == 1.0);
  test(pidgey.damage_multiplier("Fighting") == 1.0);
  test(pidgey.damage_multiplier("Flying") == 1.0);
  test(pidgey.damage_multiplier("Poison") == 1.0);

  test(fletchling.damage_multiplier("Normal") == 1.0);
  test(fletchling.damage_multiplier("Fighting") == 1.0);
  test(fletchling.damage_multiplier("Flying") == 1.0);
  test(fletchling.damage_multiplier("Poison") == 1.0);

  test(zubat.damage_multiplier("Normal") == 1.0);
  test(zubat.damage_multiplier("Fighting") == 0.25);
  test(zubat.damage_multiplier("Flying") == 1.0);
  test(zubat.damage_multiplier("Poison") == 0.5);

  test(toxicroak.damage_multiplier("Normal") == 1.0);
  test(toxicroak.damage_multiplier("Fighting") == 0.5);
  test(toxicroak.damage_multiplier("Flying") == 2.0);
  test(toxicroak.damage_multiplier("Poison") == 0.5);

  cout << "Assignment complete." << endl;
}
