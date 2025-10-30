int __fastcall sub_11BC60(int a1, _DWORD *a2, int a3)
{
  signed int v5; // r7
  int result; // r0
  int *v8; // r5
  char *v9; // r0
  _DWORD *v10; // r3
  int v11; // r5
  char *v12; // r4
  signed int v13; // r4
  int v14; // r1
  int v15; // r0
  void *v16; // r7
  int v17; // r0
  int v18; // r7
  int v19; // r4
  const char *v20; // [sp+0h] [bp-24h]
  int v21; // [sp+8h] [bp-1Ch]
  _DWORD *v22; // [sp+Ch] [bp-18h]
  signed int v23; // [sp+14h] [bp-10h]

  v5 = 0;
  result = sub_10C010((int)a2);
  if ( result > 0 )
  {
    while ( 1 )
    {
      v8 = (int *)sub_10C01C(a2, v5);
      v9 = sub_EAC84(*v8);
      if ( v9 == (char *)164 )
      {
        sub_B550C(a1, "%*sCPS: %.*s\n", a3, &byte_1A4198, *(_DWORD *)v8[1], *(_DWORD *)(v8[1] + 8));
        goto LABEL_18;
      }
      if ( v9 != (char *)165 )
      {
        sub_B550C(a1, "%*sUnknown Qualifier: ", a3 + 2, &byte_1A4198);
        sub_127D14(a1, *v8);
        sub_B6C30(a1, (int)"\n");
        goto LABEL_18;
      }
      v21 = a3 + 2;
      sub_B550C(a1, "%*sUser Notice:\n", a3, &byte_1A4198);
      v10 = (_DWORD *)v8[1];
      v11 = *v10;
      v22 = v10;
      if ( *v10 )
        break;
LABEL_22:
      v19 = v10[1];
      if ( v19 )
        sub_B550C(a1, "%*sExplicit Text: %.*s\n", v21, &byte_1A4198, *(_DWORD *)v19, *(const char **)(v19 + 8));
LABEL_18:
      ++v5;
      result = sub_10C010((int)a2);
      if ( v5 >= result )
        return result;
    }
    sub_B550C(
      a1,
      "%*sOrganization: %.*s\n",
      a3 + 2,
      &byte_1A4198,
      **(_DWORD **)v11,
      *(const char **)(*(_DWORD *)v11 + 8));
    if ( sub_10C010(*(_DWORD *)(v11 + 4)) > 1 )
      v12 = "s";
    else
      v12 = &byte_1A4198;
    v20 = v12;
    v13 = 0;
    sub_B550C(a1, "%*sNumber%s: ", v21, &byte_1A4198, v20);
    v23 = v5;
    while ( 1 )
    {
      if ( v13 >= sub_10C010(*(_DWORD *)(v11 + 4)) )
      {
        v5 = v23;
        sub_B6C30(a1, (int)"\n");
        v10 = v22;
        goto LABEL_22;
      }
      v17 = sub_10C01C(*(_DWORD **)(v11 + 4), v13);
      v18 = v17;
      if ( v13 )
      {
        sub_B6C30(a1, (int)", ");
        v14 = v18;
        if ( !v18 )
        {
LABEL_16:
          sub_B6C30(a1, (int)"(null)");
          goto LABEL_12;
        }
      }
      else
      {
        v14 = v17;
        if ( !v17 )
          goto LABEL_16;
      }
      v15 = sub_122434(0, v14);
      v16 = (void *)v15;
      if ( !v15 )
      {
        v5 = v23;
        goto LABEL_18;
      }
      sub_B6C30(a1, v15);
      CRYPTO_free(v16);
LABEL_12:
      ++v13;
    }
  }
  return result;
}
