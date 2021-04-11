///////////////////////////////////////////////////////////////////////////////
// 
// AIPDef.h
//
// Contains structure definitions and constants for the supplemental build
// lists in Civ3
//
// by The Mad Dr. I
//
///////////////////////////////////////////////////////////////////////////////




///////////////////////////////////////////////////////////////////////////////
//
// Build_List_Class
// -------------------
// Specifies a list of unit types, from which we should try to build one
struct Build_List_Class
{
	char class_name[80];				// The names of the build list
	double priority;					// How important to build form this list
};

#define UNLIMITED -999999

#define YES 1
#define NO 0

#define MAX_BUILD_LISTS 200

#define MAX_ELEMENTS 2000

///////////////////////////////////////////////////////////////////////////////
//
// Build_List_Element
// 
// Specifies a type in a build list
struct Build_List_Element
{
	char unit_type_name[80];			// The names of a unit type
	double units_to_build;				// How many of this type per city
};



///////////////////////////////////////////////////////////////////////////////
//
// Better_Build_List_Element
// 
// Specifies a type in a build list, and which base to build it from
struct Better_Build_List_Element
{
	char unit_type_name[80];			// The names of a unit type
	double units_to_build;				// How many of this type per city
	int m_base_num;						// Which base do we put it at? 
										// (only used for stations)
};


///////////////////////////////////////////////////////////////////////////////
//
// Mo_Better_Build_List_Element
// 
// Specifies a type in a build list, which base to build it from, and how many
// times MAX we can rebuild this thing
struct Mo_Better_Build_List_Element
{
	char unit_type_name[80];			// The names of a unit type
	double units_to_build;				// How many of this type per city
	int m_base_num;						// Which base do we put it at? 
										// (only used for stations)
	int m_buildMAX;						// How many UNITS max can be built
										// from this line?
};


///////////////////////////////////////////////////////////////////////////////
//
// Way_Better_Build_List_Element
// 
// Specifies a type in a build list, which base to build it from, how many
// times MAX we can rebuild this thing, and what Tech level the item either
// defines (positive) or is limited to (negative)
struct Way_Better_Build_List_Element
{
	char unit_type_name[80];			// The names of a unit type
	double units_to_build;				// How many of this type per city
	int m_base_num;						// Which base do we put it at? 
										// (only used for stations)
	int m_buildMAX;						// How many UNITS max can be built
										// from this line?

	int m_techLevel;					// If positive: Tech level this defines
										// Negative: Highest tech level at which
										// we should build this.
};



/*

  This stuff is not used yet in Armada

#define NUMBER_TO_HAVE 0
#define NUMBER_TO_BUILD 1
#define RATIO_TO_BUILD 2
#define RATIO_TO_HAVE 3

*/






