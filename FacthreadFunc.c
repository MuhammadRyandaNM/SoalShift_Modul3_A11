void *Facthread(void *no)
{
    int *input,N;
    input=(int*)no;
    
    for(N=2;N<=*input;N=N+2)
    {
        pthread_mutex_lock(&Var);
        tot=tot * N;
        pthread_mutex_unlock(&Var);
    }
    pthread_exit(NULL);    
}
