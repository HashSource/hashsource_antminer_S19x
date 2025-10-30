int __fastcall sub_13A150(int *a1, _DWORD *a2, char a3)
{
  int v6; // r8
  int result; // r0
  int v8; // r9
  signed int v9; // r5
  _DWORD *v10; // r10
  int v11; // r0
  int v12; // r4
  int v13; // r6
  int v14; // r11
  bool v15; // cc
  unsigned int v16; // r1
  int v17; // r4
  unsigned int v18; // r1
  _DWORD *v19; // r0
  int v20; // [sp+8h] [bp-Ch]
  int v21; // [sp+Ch] [bp-8h]

  if ( sub_EAC84(*a1) == (char *)22 )
  {
    v6 = a1[1];
    result = -1;
    if ( v6 )
    {
      v8 = 0;
      v20 = a3 & 0x10;
      v9 = 0;
      v10 = *(_DWORD **)(v6 + 12);
      while ( v9 < sub_10C010(*(_DWORD *)(v6 + 20)) )
      {
        v11 = sub_10C01C(*(_DWORD **)(v6 + 20), v9);
        v12 = *(_DWORD *)(v11 + 28);
        v13 = v11;
        if ( !v12 )
        {
          do
          {
            v15 = v12 < sub_10C010((int)a2);
            v16 = v12++;
            if ( !v15 )
            {
              if ( *(_DWORD *)(v13 + 28) )
                goto LABEL_4;
              goto LABEL_11;
            }
            v14 = sub_10C01C(a2, v16);
          }
          while ( sub_13A148(v13, v14) );
          sub_13A118(v13, v14);
          ++v8;
          if ( *(_DWORD *)(v13 + 28) )
            goto LABEL_4;
LABEL_11:
          v17 = v20;
          if ( !v20 )
          {
            while ( 1 )
            {
              v15 = v17 < sub_10C010((int)v10);
              v18 = v17++;
              if ( !v15 )
                break;
              v19 = (_DWORD *)sub_10C01C(v10, v18);
              if ( !*v19 )
              {
                v21 = v19[1];
                if ( !sub_13A148(v13, v21) )
                {
                  sub_13A118(v13, v21);
                  ++v8;
                  break;
                }
              }
            }
          }
        }
LABEL_4:
        ++v9;
      }
      return v8;
    }
  }
  else
  {
    sub_D0048(46, 133, 108, (int)"crypto/cms/cms_sd.c", 26);
    return -1;
  }
  return result;
}
