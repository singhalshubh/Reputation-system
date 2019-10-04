# Reputation-system-Documentation-and-Research

The codes for Reputation System have been merged with the Collaborative Community, reputation of a user being a **microservice**. </br>
The link to the merged code, project as a whole is: 
https://github.com/fresearchgroup/Collaboration-System/tree/reputation</br>

# Introduction
Reputation Systems are the systems which allow to present the actual statistics about the active participation of the user. The reputation system is focussing on automating the reputation of whole system where the reputation factor increases with respect to the domain of contribution. In Collaborative system we addressed these following issues:</br>
1.) Reputation system has to be implemented for both the community and the overall system. The system includes various communities and a user can be a part of various communities, thus having different roles in different communities. So the measure of overall participation was introduced by using the concept of system reputation.</br>
2.) The reputation calculation is code intensive and thus an easy way out was brought that if we make a separate model for reputation and try to call it as soon as community reputation for that user changes. It will ensure a smoother updation which the user can see from his own dashboard. Thus, two different models - Reputation and Voting are interwined to get the overall reputation score.</br>
3.) The implementation of badge system where the badges needs to decided for small steps taken by the user for encouraging more participation from the users and trying to make the user’s participation even bigger.The reputation for community is the symbol of the role of who is going to be the nextpublisher and the total reputation of a user in the system introduces a concept of who is more learned and active in the system.</br>
4.) Addressed the issue of "Why all contributors who helped in editing should get equal points?" by devising an algorithm mentioned in https://arxiv.org/abs/1906.07339</br>
</br>
The complete and full implementation of reputation system is handled:
1.      Implementation of Upvote and downvote button.</br>
2.      Implementation of change in user reputation based on the role and upvote and downvote which needs a research model where all the specifications required for updation of reputation is implemented. </br>
3.      The difference between system reputation and community reputation. </br>
</br>
**Difference between our system and rest**: 
1.) Grading System scales itself depending on the number of contributors.</br>
2.)  Solved the problem of ”Why there should be equal distribution of points for all the contributors of an
article” by devising a scaling algorithm of fair allocation unlike stack overflow which has a fixed scheme of reputation depending on the number of upvotes.</br>
3.) As the communities in the system can be created by any user, user with low reputation is inhesitant to try the system as the reputation scale will be different for a newly formed community, thus giving a fair chance to every user to become a publisher.</br>
4.) Redundant communities with same context cannot be created. Ensured using multiple annonated tags attached to a community name which all means the same.</br>
For more detailed analysis on grading policy, research model and the subsystems implemented along with their timelines is mentioned in the report.
