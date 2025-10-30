int __fastcall sub_3C398(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v13; // r12
  int v14; // r3
  char v16[2048]; // [sp+0h] [bp-800h] BYREF

  pthread_mutex_lock(&stru_1AEA88);
  v13 = realloc((void *)dword_1AEAA4, 36 * (dword_1AEAA0 + 1));
  if ( v13 )
  {
    v13[9 * dword_1AEAA0] = a1;
    v13[9 * dword_1AEAA0 + 1] = a2;
    v13[9 * dword_1AEAA0 + 2] = a3;
    v13[9 * dword_1AEAA0 + 3] = a4;
    v13[9 * dword_1AEAA0 + 4] = a5;
    v13[9 * dword_1AEAA0 + 5] = a6;
    v13[9 * dword_1AEAA0 + 6] = a7;
    v13[9 * dword_1AEAA0 + 7] = a8;
    v14 = dword_1AEAA0++;
    v13[9 * v14 + 8] = a9;
    dword_1AEAA4 = (int)v13;
    return pthread_mutex_unlock(&stru_1AEA88);
  }
  else
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v16, "realloc fail when register miner config\n");
      sub_47AB4(3, v16, 0);
    }
    return pthread_mutex_unlock(&stru_1AEA88);
  }
}
