int __fastcall sub_3C4FC(int a1)
{
  int v1; // r7
  int v2; // r4
  int v3; // r6

  if ( !(a1 | (unsigned __int8)byte_1AEA84 ^ 1) )
    return 1;
  sub_3C6CC();
  pthread_mutex_lock(&stru_1AEA88);
  if ( dword_1AEAA0 <= 0 )
  {
LABEL_10:
    v1 = 0;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      ++v3;
      sub_19720(*(_DWORD *)(dword_1AEAA4 + v2 + 4), *(_DWORD *)(dword_1AEAA4 + v2));
      v1 = sub_1942C();
      if ( v1 )
        break;
      sub_19750();
      v2 += 36;
      if ( v3 >= dword_1AEAA0 )
        goto LABEL_10;
    }
    sub_313F8(*(_DWORD *)(dword_1AEAA4 + v2 + 8));
    sub_3142C(*(_DWORD *)(dword_1AEAA4 + v2 + 12));
    sub_175E4(*(_DWORD *)(dword_1AEAA4 + v2 + 16));
    sub_36C54(*(_DWORD *)(dword_1AEAA4 + v2 + 20));
    sub_1A79C(*(_DWORD *)(dword_1AEAA4 + v2 + 24));
    sub_24848(*(_DWORD *)(dword_1AEAA4 + v2 + 28));
    sub_22A54(*(_DWORD *)(dword_1AEAA4 + v2 + 32));
    byte_1AEA84 = 1;
  }
  dword_1AEAA0 = 0;
  free((void *)dword_1AEAA4);
  dword_1AEAA4 = 0;
  pthread_mutex_unlock(&stru_1AEA88);
  return v1;
}
