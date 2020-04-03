/*
    Aim:An election is contested by five candidates.
        The candidates are numbered 1 to 5 and the
        voting is done by marking the candidate number
        in ballot paper. WAP to read the ballot paper
        and count the votes. The program should declare
        the winner of maximum votes. If the number is
        outside the range then it should take it as
        spoilt ballot and also count the number of
        such spoilt ballot.
    Author:Shiburaj
*/
#include<stdio.h>
#include<stdlib.h>

void print_candidates(int c){
    int i;
    printf("List of Candidates:\n");
    for(i=0;i<c;i++){
        printf("\tCandidate No. %d = %d\n",i,i);
    }
}

int sort_votes(int arr[], int n)
{
   int i, j, temp;
   for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++)  {
            if (arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }

   }

   return arr[0];


}

int main(){
    int candidates[100] = {0},c_bup[100],voters,c_total,i,your_vote,spoit_votes=0,max_votes;

    printf("** Election System **\n\n");

    printf("Enter the Number of Candidates:");
    scanf("%d",&c_total);

    printf("Enter the Number of Voters:");
    scanf("%d",&voters);

    for(i=0;i<voters;i++){
        system("cls");
        print_candidates(c_total);
        printf("\n\n\nVoter %d\n",i+1);
        printf("Enter your Vote:");
        scanf("%d",&your_vote);
        if(your_vote>=0 && your_vote<=c_total){
            candidates[your_vote]++;
        }else{
            spoit_votes++;
        }

        printf("Thank you for your Vote.");
        system("pause");
    }

    printf("Election Finished. Calculating...\n\n");
    printf("Spoilt Votes = %d\n\n",spoit_votes);
    for(i=0;i<c_total;i++){
        c_bup[i] = candidates[i];
    }
    max_votes = sort_votes(candidates, c_total);

    for(i=0;i<c_total;i++){
        if(c_bup[i] == max_votes){
            break;
        }
    }

    printf("Winner is Candidate %d with %d votes\n\n",i,max_votes);




    return 0;
}


