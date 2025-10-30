int __fastcall sub_1230C8(int **a1, _DWORD *a2, int a3)
{
  unsigned int v5; // r6
  int v7; // r0
  char *v8; // r1
  int v9; // r2
  int v10; // r4
  bool v11; // zf
  int v12; // r3
  int v13; // t1
  int v14; // r5
  bool v15; // zf

  if ( !a1 )
    return 0;
  v5 = 0;
  if ( sub_10C010((int)a2) <= 0 )
    return 1;
  while ( 1 )
  {
    v7 = sub_10C01C(a2, v5);
    v8 = *(char **)(v7 + 4);
    v9 = (unsigned __int8)*v8;
    if ( *v8 )
    {
      v10 = *(_DWORD *)(v7 + 4);
      v11 = v9 == 58;
      if ( v9 != 58 )
        v11 = (v9 & 0xFD) == 44;
      if ( v11 )
      {
LABEL_12:
        if ( *(_BYTE *)(v10 + 1) )
        {
          v8 = (char *)(v10 + 1);
          v9 = *(unsigned __int8 *)(v10 + 1);
        }
      }
      else
      {
        while ( 1 )
        {
          v13 = *(unsigned __int8 *)++v10;
          v12 = v13;
          v14 = v13 & 0xFD;
          if ( !v13 )
            break;
          v15 = v12 == 58;
          if ( v12 != 58 )
            v15 = v14 == 44;
          if ( v15 )
            goto LABEL_12;
        }
      }
      if ( v9 == 43 )
      {
        ++v8;
        v9 = -1;
      }
      else
      {
        v9 = 0;
      }
    }
    if ( !sub_114068(a1, v8, a3, *(char **)(v7 + 8), 0xFFFFFFFF, -1, v9) )
      return 0;
    if ( (int)++v5 >= sub_10C010((int)a2) )
      return 1;
  }
}
