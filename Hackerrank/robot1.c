j=0;
            for(k=i+1;k<n;k++)
            {
                temp[j]=fabs(M2[j]-M1[k])
                j++;
            }
            for(j=0;j<n;j++)
            {
                min=Temp[j]
                for(k=j+1;k<n;k++)
                {
                    if(min<=Temp[k])
                    {
                        tem=min;
                        min=Temp[j];
                        Temp[j]=Temp[k]
                    }
                }
            }