int __fastcall sub_4298C(int a1)
{
  int result; // r0
  _DWORD *v3; // r1
  int v4; // r7
  _DWORD *v5; // lr
  int v6; // r5
  int v7; // t1
  int v8; // r3
  int v9; // r2
  int v10; // r3
  char v11[52]; // [sp+0h] [bp-34h] BYREF

  memset(&unk_6E3470, 0, 0x162Cu);
  memset(&unk_6E4A9C, 0, (size_t)&loc_20504);
  dword_705334 = 0;
  dword_705338 = 0;
  byte_70533C = 0;
  if ( !a1 )
  {
    dword_705340 = 0;
    dword_705344 = 0;
  }
  sub_1E938(v11, 0x30u);
  printf("%s ", v11);
  printf("%s : ======pause_recv_nonce=%d\n", "reset_runtime_info", dword_705348);
  snprintf(byte_63EFD8, 0x100u, "======pause_recv_nonce=%d", dword_705348);
  result = sub_3CC5C((int)byte_63EFD8, v11);
  v3 = (_DWORD *)dword_705300;
  if ( *(int *)(dword_705300 + 4) > 0 )
  {
    v4 = 0;
    v5 = &unk_7050FC;
    do
    {
      v7 = v5[1];
      ++v5;
      v6 = v7;
      if ( (int)v3[6] > 0 )
      {
        result = 0;
        do
        {
          v8 = v3[8];
          if ( v8 > 0 )
          {
            v9 = 0;
            do
            {
              v10 = v9 + v8 * result;
              ++v9;
              *(_DWORD *)(v6 + 56 * v10 + 4) = 0;
              v3 = (_DWORD *)dword_705300;
              v8 = *(_DWORD *)(dword_705300 + 32);
            }
            while ( v8 > v9 );
          }
          ++result;
        }
        while ( v3[6] > result );
      }
      ++v4;
    }
    while ( v3[1] > v4 );
  }
  return result;
}
