#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H
#include "utils/glm.hpp"
#include "Controller.hpp"
#include "Viking.hpp"

#include "Player.hpp"

namespace uGE {

    struct CollisionResult;
	class PlayerController : public Controller
	{
        private:
            float _shootTime;
            bool _isSucking;
            float _vikingTime;

            Player * player;
            Viking * _viking;

		public:
			PlayerController( uGE::GameObject * parent );
			virtual ~PlayerController();

			void update();
			void shoot();
			void attack();
			void vacuum();

            void onCollision( CollisionResult * result );
	};
}
#endif // PLAYERCONTROLLER_H
