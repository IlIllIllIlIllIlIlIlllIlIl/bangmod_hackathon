#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> vocabulary = {
        "absolutely",
        "acceptable",
        "accessible",
        "accidental",
        "accomplish",
        "accounting",
        "adjustment",
        "admiration",
        "background",
        "basketball",
        "blacksmith",
        "blackberry",
        "bloodhound",
        "blackboard",
        "bottleneck",
        "brainstorm",
        "brainpower",
        "brightness",
        "calculator",
        "capability",
        "casualties",
        "categories",
        "collection",
        "commercial",
        "commitment",
        "comparison",
        "conclusion",
        "conference",
        "confidence",
        "connection",
        "definition",
        "department",
        "depression",
        "dictionary",
        "difference",
        "difficulty",
        "discussion",
        "efficiency",
        "employment",
        "enterprise",
        "enthusiasm",
        "equivalent",
        "evaluation",
        "everything",
        "excellence",
        "experience",
        "experiment",
        "expression",
        "foundation",
        "friendship",
        "generation",
        "government",
        "greenhouse",
        "healthcare",
        "helicopter",
        "historical",
        "hypothesis",
        "importance",
        "impression",
        "incredible",
        "individual",
        "initative",
        "innovation",
        "instrument",
        "investment",
        "journalism",
        "journalist",
        "kidnapping",
        "leadership",
        "literature",
        "management",
        "manuscript",
        "meditation",
        "membership",
        "motivation",
        "navigation",
        "networking",
        "obligation",
        "occupation",
        "opposition",
        "parliament",
        "percentage",
        "perception",
        "permission",
        "philosophy",
        "photograph",
        "population",
        "proportion",
        "phychology",
        "reflection",
        "regulation",
        "reputation",
        "restaurant",
        "revolution",
        "resolution",
        "specialist",
        "successful",
        "technology",
        "understand",
        "vocabulary"
    };

    int N;
    int scores = 0;
    cin >> N;

    for (int i = 0; i < N; i++){
        string target;
        cin >> target;

       bool found = false;

        for (int j = 0; j < vocabulary.size(); j++)
        {
            if (target == vocabulary[j])
            {
                scores += j + 1;
                found = true;
                break;
            }
        }
        
        if (!found)
        {
            scores--;
        }
    }

    cout << scores << "\n";
    return 0;
}
