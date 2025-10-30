int __fastcall sub_11E288(_DWORD *a1, int a2, int a3, const char *a4)
{
  signed int i; // r8
  _DWORD *v9; // r4
  _DWORD *v10; // r1
  int *v11; // r3
  int v12; // r5
  unsigned __int8 *v13; // r4
  unsigned __int8 *v14; // r4
  int v15; // r7
  int j; // r5

  if ( sub_10C010((int)a1) > 0 )
    sub_B550C(a2, "%*s%s:\n", a3, &byte_1A4198, a4);
  for ( i = 0; i < sub_10C010((int)a1); ++i )
  {
    v9 = (_DWORD *)sub_10C01C(a1, i);
    sub_B550C(a2, (unsigned __int8 *)"%*s", a3 + 2, &byte_1A4198);
    v10 = (_DWORD *)*v9;
    if ( *(_DWORD *)*v9 == 7 )
    {
      v11 = (int *)v10[1];
      v12 = *v11;
      v13 = (unsigned __int8 *)v11[2];
      sub_B6C30(a2, (int)"IP:");
      if ( v12 == 8 )
      {
        sub_B550C(a2, "%d.%d.%d.%d/%d.%d.%d.%d", *v13, v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v13[7]);
      }
      else
      {
        if ( v12 == 32 )
        {
          v14 = v13 + 2;
          v15 = 1;
          for ( j = 0; ; ++j )
          {
            sub_B550C(a2, "%X", *(v14 - 1) | (*(v14 - 2) << 8));
            if ( j == 7 )
            {
              sub_B6C30(a2, (int)"/");
            }
            else
            {
              if ( j == 15 )
                goto LABEL_5;
              sub_B6C30(a2, (int)&word_1B5258);
              if ( v15 == 16 )
                goto LABEL_5;
            }
            v14 += 2;
            ++v15;
          }
        }
        sub_B550C(a2, "IP Address:<invalid>");
      }
    }
    else
    {
      sub_16FDE0(a2, v10);
    }
LABEL_5:
    sub_B6C30(a2, (int)"\n");
  }
  return 1;
}
