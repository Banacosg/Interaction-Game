This game is meant to be a simulation style game which has complex
parameters and rules that will hopefully lead to complex behaviors
by the agents.

The basics of the game are there is a 2D board with "interactors"
on it. These interactors can choose to interact with other 
"interactors" next to them. These interactions are governed by
simple rules.
I1 | I2
1  | 1 = Both get 1 energy
1  | 0 = p1 gets 1
0  | 1 = p2 gets 1
0  | 0 = Both get 0 
H  | N = p1 gets N 
N  | H = p2 gets N 

The energy recieved is then multiplied by the similarity scores 
of the two interactors. The more interactions two interactors have
together, the more similar their developed behaviors become and
less energy they recieve from interactions together.

An interactor is alive as long as it has more than 0 energy.

Two interactors can have children as long as they both put in
enough energy to make it happen. The children inherit personality
from the parents.