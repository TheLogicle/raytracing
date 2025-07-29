#include "../objects.hpp"


namespace scene1
{
	static struct RedRoundCube : obj::object
	{
		RedRoundCube ()
		{
			shiftOrigin = {0, 0, 2};

			col = {255, 0, 0};

			glossDrop = 1.5;

			maxRefl = 0;
			reflDrop = 0;
			permRefl = 0.3;
		}

		float O (float x, float y, float z) override
		{
			return x*x*x*x*x*x*x*x*x*x + y*y*y*y*y*y*y*y*y*y + z*z*z*z*z*z*z*z*z*z - 1;
		}

		float O_x (float x, float y, float z) override
		{
			return 10*x*x*x*x*x*x*x*x*x;
		}
		float O_y (float x, float y, float z) override
		{
			return 10*y*y*y*y*y*y*y*y*y;
		}
		float O_z (float x, float y, float z) override
		{
			return 10*z*z*z*z*z*z*z*z*z;
		}
	} redRoundCube;





	static struct GreenSphere : obj::object
	{
		GreenSphere ()
		{
			shiftOrigin = {-1.7, 2, 3};

			col = {20, 230, 50};

			glossDrop = 1.5;

			maxRefl = 0;
			reflDrop = 0;
			permRefl = 0.45;

		}

		float O (float x, float y, float z) override
		{
			return x*x + y*y + z*z - 0.7;
		}

		float O_x (float x, float y, float z) override
		{
			return 2*x;
		}
		float O_y (float x, float y, float z) override
		{
			return 2*y;
		}
		float O_z (float x, float y, float z) override
		{
			return 2*z;
		}

	} greenSphere;





	static struct MirrorSphere : obj::object
	{
		MirrorSphere ()
		{
			shiftOrigin = {-4, 1.5, 2.5};

			col = {20, 50, 70};

			glossDrop = 2;

			maxRefl = 0;
			reflDrop = 0;
			permRefl = 0.8;
		}

		float O (float x, float y, float z) override
		{
			return x*x + y*y + z*z - 0.2;
		}

		float O_x (float x, float y, float z) override
		{
			return 2*x;
		}
		float O_y (float x, float y, float z) override
		{
			return 2*y;
		}
		float O_z (float x, float y, float z) override
		{
			return 2*z;
		}

	} mirrorSphere;




	static struct Floor : obj::object
	{
		Floor ()
		{
			shiftOrigin = {0, 0, 0};

			col = {80, 100, 140};

			glossDrop = 2;

			maxRefl = 0.8;
			reflDrop = 1.5;
			permRefl = 0.3;
		}

		float O (float x, float y, float z) override
		{
			return z;
		}

		float O_x (float x, float y, float z) override
		{
			return 0;
		}
		float O_y (float x, float y, float z) override
		{
			return 0;
		}
		float O_z (float x, float y, float z) override
		{
			return 1;
		}
	} floor;

}
