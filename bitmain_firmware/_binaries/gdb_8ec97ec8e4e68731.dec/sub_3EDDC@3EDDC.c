int __fastcall sub_3EDDC(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v8; // r3
  int v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r4
  int v15; // r0
  int v16; // r0
  sigset_t set; // [sp+10h] [bp-80h] BYREF

  if ( *(_DWORD *)(a6 + 8) )
  {
    v8 = sub_9836C(20);
    v9 = *(_DWORD *)(a6 + 8);
    v10 = *a5;
    v11 = a5[1];
    v12 = *(_DWORD *)(a6 + 36);
    *(_DWORD *)v8 = off_34EEC8;
    *(_DWORD *)(v8 + 8) = v10;
    *(_DWORD *)(v8 + 12) = v11;
    *(_DWORD *)(v8 + 16) = v9;
    *(_BYTE *)(v8 + 4) = (v12 & 0xFFFFFFFB) == 1;
    if ( !a1 || *(_DWORD *)(a1 + 44) == 2 )
    {
      v13 = sub_23FBF8(a2, a3, a4);
      a1 = v13;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 248);
      *(_DWORD *)(a1 + 248) = v8;
      if ( v13 )
        v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    }
    if ( sub_22EBBC(v13) && !dword_471F20 )
    {
      sub_46E7C(&set);
      sigemptyset(&stru_471F24);
      v14 = 1;
      sigemptyset(&stru_471FA4);
      do
      {
        if ( sigismember(&set, v14) )
        {
          v15 = sub_99AEC(v14);
          if ( sub_188FEC(v15, 0) )
            sigaddset(&stru_471F24, v14);
          v16 = sub_99AEC(v14);
          if ( sub_189010(v16, 0) )
            sigaddset(&stru_471FA4, v14);
          dword_471F20 = 1;
        }
        ++v14;
      }
      while ( v14 != 65 );
    }
  }
  return a1;
}
