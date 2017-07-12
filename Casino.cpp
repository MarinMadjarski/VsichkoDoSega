/*
 * Casino.cpp
 *
 *  Created on: 5.06.2017 ã.
 *      Author: user
 */

#include "Casino.h"

Casino::Casino() {


}

Casino::~Casino() {
	// TODO Auto-generated destructor stub
}

void Casino::readXml() {
	pugi::xml_document doc;



	    pugi::xml_node panels = doc.child("hall");

	    std::cout << panels.name() << std::endl;

	    for (pugi::xml_node panel = panels.first_child(); panel; panel = panel.next_sibling())
	    {
	        std::cout << panel.name() << std::endl;

	        for (pugi::xml_attribute attr = panel.first_attribute(); attr; attr = attr.next_attribute())
	        {
	            std::cout << " " << attr.name() << "=" << attr.value() << std::endl;
	        }
	        std::cout << std::endl;
	    }
	    std::cout << std::endl;



}
