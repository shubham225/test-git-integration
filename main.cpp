#include<iostream>
#include<math.h>
using namespace std;

int main()
{
float a[30];
float amp, samf,sf, n, nsamf;
cout<<"Enter Amplitude"<<endl;
cin>>amp;
cout<<"Enter the number of samples"<<endl;
cin>>n;
cout<<"Enter Signal Frequency"<<endl;
cin>>sf;
cout<<"Enter Sampling Frequency Twice of Signal Frequency"<<endl;
cin>>samf;

if(samf>=(2*sf))
{
cout<<"AMPLITUDE"<<"\t"<<"SIGNAL FREQ"<<"\t"<<"SAMPLING FREQ"<<"\t"<<"NO OF SAMPLES"<<"\t"<<"OUTPUT"<<endl;
for(int i=0;i<n;i++)
{
   a[i]=amp*sin((2*22*i*sf)/(7*samf));
   cout<<amp<<"\t\t"<<sf<<"\t\t"<<samf<<"\t\t"<<n<<"\t\t"<<a[i]<<endl;
}
}
else
{
cout<<"Error in sampling frequency"<<endl;
cout<<"Enter new Sampling Frequency"<<endl;
cin>>nsamf;
}
return 0;
}