int __fastcall sub_24ACEC(int a1)
{
  int v2; // r0
  unsigned int *v3; // r0
  unsigned int *v4; // r11
  unsigned int v5; // r1
  _DWORD *v6; // r7
  unsigned int v7; // r5
  int v8; // r2
  int v9; // t1
  int v10; // r3
  bool v11; // zf
  int v12; // r3
  _DWORD *v13; // r4
  int v14; // r0
  void (*v15)(void); // r3
  int result; // r0
  int v17; // r5
  _BOOL4 v18; // r5

  v2 = off_489BBC(&dword_4899A0);
  v3 = (unsigned int *)((int (__fastcall *)(int))loc_D20F4)(v2);
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    if ( *v3 )
    {
      v6 = v3 + 1;
      v7 = 0;
      do
      {
        v9 = v6[1];
        ++v6;
        v8 = v9;
        v10 = *(_DWORD *)(v9 + 12);
        v11 = v10 == 28;
        if ( v10 == 28 )
          v12 = 56312;
        else
          v12 = dword_46DBF0;
        if ( v11 )
        {
          HIWORD(v12) = 70;
          v12 = *(_DWORD *)v12;
        }
        if ( v12 )
        {
          v13 = *(_DWORD **)(v8 + 28);
          if ( v13 )
          {
            do
            {
              v14 = v13[19];
              if ( v14 )
              {
                v15 = *(void (**)(void))(*(_DWORD *)v14 + 32);
                if ( v15 != nullsub_8 )
                  v15();
              }
              v13 = (_DWORD *)*v13;
            }
            while ( v13 );
            v5 = *v4;
          }
        }
        ++v7;
      }
      while ( v7 < v5 );
    }
    free(v4);
  }
  if ( a1 )
  {
    result = off_489BE8(&dword_4899A0, 0, 0, a1);
    if ( result )
      goto LABEL_20;
LABEL_24:
    result = sub_946B0("Target does not support trace notes, note ignored");
    goto LABEL_20;
  }
  v17 = dword_48A8B0;
  result = off_489BE8(&dword_4899A0, 0, 0, dword_48A8B0);
  v18 = v17 != 0;
  if ( result )
    v18 = 0;
  if ( v18 )
    goto LABEL_24;
LABEL_20:
  dword_48A8D0 = 0;
  return result;
}
