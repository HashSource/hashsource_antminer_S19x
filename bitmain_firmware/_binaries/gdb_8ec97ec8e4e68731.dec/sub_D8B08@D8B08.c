int __fastcall sub_D8B08(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // r0
  int v8; // r9
  _DWORD *v9; // r4
  int v10; // r3
  _DWORD *v11; // r6

  v7 = (_DWORD *)dword_478348;
  v8 = *(_DWORD *)(a1 + 20);
  if ( dword_478348 )
  {
    while ( 1 )
    {
      v9 = (_DWORD *)v7[2];
      if ( v7[18] != dword_487D2C )
        goto LABEL_3;
      v10 = v7[3];
      if ( v10 == 23 )
      {
        sub_D8944(v7, 10, &dword_4784E4, 1)[28] = v8;
        goto LABEL_9;
      }
      if ( v10 == 25 )
      {
        sub_D8944(v7, 13, &dword_4784E4, 1)[28] = v8;
LABEL_9:
        v7 = v9;
        if ( !v9 )
          break;
      }
      else
      {
LABEL_3:
        v7 = (_DWORD *)v7[2];
        if ( !v9 )
          break;
      }
    }
  }
  v11 = (_DWORD *)(a1 + 228);
  *v11 = a2;
  v11[1] = a3;
  v11[2] = a4;
  v11[3] = a5;
  v11[4] = a6;
  return a2;
}
