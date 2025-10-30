int __fastcall sub_116FD8(int a1, _DWORD *a2)
{
  int **v4; // r8
  signed int i; // r5
  int *v6; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r3
  _DWORD *v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r4
  _DWORD *v15; // [sp+4h] [bp-8h]

  v4 = *(int ***)(a1 + 152);
  if ( sub_10C010((int)a2) )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= sub_10C010((int)a2) )
      {
        v13 = 1;
        goto LABEL_16;
      }
      v6 = (int *)sub_10C01C(a2, i);
      if ( sub_EAC84(v6[1]) == (char *)746 || sub_EAC84(*v6) == (char *)746 )
        break;
      v7 = (_DWORD *)sub_116EB0((int)v4, *v6);
      v8 = v7;
      if ( v7 )
      {
        *v7 |= 1u;
      }
      else
      {
        if ( !*v4 )
          continue;
        v9 = sub_116F1C(0, (char **)*v6, **v4 & 0x10);
        if ( !v9 )
        {
LABEL_18:
          v13 = 0;
          goto LABEL_16;
        }
        v15 = v9;
        v10 = (*v4)[2];
        *v9 |= 6u;
        v9[2] = v10;
        v11 = sub_10BD3C(v4[1], (int)v9);
        v8 = v15;
        if ( !v11 )
        {
          v13 = 0;
          policy_data_free(v15, v12, 0, (int)v15);
          goto LABEL_16;
        }
      }
      if ( !sub_10BD3C((int *)v8[3], v6[1]) )
        goto LABEL_18;
      v6[1] = 0;
    }
  }
  v13 = -1;
  *(_DWORD *)(a1 + 128) |= 0x800u;
LABEL_16:
  sub_10BFDC((int)a2, (void (__fastcall *)(int))POLICY_MAPPING_free);
  return v13;
}
