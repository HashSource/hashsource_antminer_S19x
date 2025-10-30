void __fastcall sub_216684(int a1, char **a2, int *a3)
{
  _DWORD *v4; // r4
  char *v5; // r6
  int v7; // r2
  int v8; // r6
  void *ptr[2]; // [sp+0h] [bp-18h] BYREF
  _BYTE v10[16]; // [sp+8h] [bp-10h] BYREF

  v4 = *(_DWORD **)(a1 + 4);
  if ( v4 == *(_DWORD **)(a1 + 8) )
  {
    sub_21631C((void **)a1, *(char **)(a1 + 4), a2, a3);
  }
  else
  {
    v5 = *a2;
    ptr[0] = v10;
    if ( v5 )
      v7 = (int)&v5[strlen(v5)];
    else
      v7 = -1;
    sub_211AC4(ptr, v5, v7);
    if ( v4 )
    {
      v8 = *a3;
      *v4 = v4 + 2;
      sub_211AC4(v4, (_BYTE *)ptr[0], (int)ptr[0] + (unsigned int)ptr[1]);
      v4[6] = v8;
    }
    if ( ptr[0] != v10 )
      sub_339E64(ptr[0]);
    *(_DWORD *)(a1 + 4) += 28;
  }
}
