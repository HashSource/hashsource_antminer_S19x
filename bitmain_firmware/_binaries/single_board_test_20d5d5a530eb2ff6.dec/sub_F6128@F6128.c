bool __fastcall sub_F6128(int a1, int a2, int a3, int a4)
{
  int v6; // r5
  int v8; // r7
  int v9; // r4
  _DWORD *v11; // r3
  int v12; // r7
  _DWORD *v13; // r0
  int v14; // r0
  char *v15; // r2

  v6 = a4;
  if ( !sub_B6E94(a1, a4, 128) )
    goto LABEL_7;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( sub_B6C30(a1, (int)"PSS parameter restrictions:") > 0 )
      {
        if ( sub_B6C30(a1, (int)"\n") <= 0 )
          goto LABEL_7;
        v6 += 2;
LABEL_11:
        if ( !sub_B6E94(a1, v6, 128) || sub_B6C30(a1, (int)"Hash Algorithm: ") <= 0 )
          goto LABEL_7;
        if ( *(_DWORD *)a3 )
        {
          if ( sub_127D14(a1, **(_DWORD **)a3) <= 0 )
            goto LABEL_7;
        }
        else if ( sub_B6C30(a1, (int)"sha1 (default)") <= 0 )
        {
          goto LABEL_7;
        }
        if ( sub_B6C30(a1, (int)"\n") <= 0 || !sub_B6E94(a1, v6, 128) || sub_B6C30(a1, (int)"Mask Algorithm: ") <= 0 )
          goto LABEL_7;
        v11 = *(_DWORD **)(a3 + 4);
        if ( v11 )
        {
          if ( sub_127D14(a1, *v11) <= 0 || sub_B6C30(a1, (int)" with ") <= 0 )
            goto LABEL_7;
          v12 = *(_DWORD *)(a3 + 4);
          if ( sub_EAC84(*(_DWORD *)v12) == (char *)911 )
          {
            v13 = (_DWORD *)sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v12 + 4));
            v8 = (int)v13;
            if ( v13 )
            {
              if ( sub_127D14(a1, *v13) <= 0 )
                goto LABEL_43;
              goto LABEL_24;
            }
          }
          if ( sub_B6C30(a1, (int)"INVALID") <= 0 )
          {
LABEL_7:
            v8 = 0;
            v9 = 0;
LABEL_8:
            X509_ALGOR_free(v8);
            return v9;
          }
        }
        else if ( sub_B6C30(a1, (int)"mgf1 with sha1 (default)") <= 0 )
        {
          goto LABEL_7;
        }
        v8 = 0;
LABEL_24:
        sub_B6C30(a1, (int)"\n");
        v14 = sub_B6E94(a1, v6, 128);
        if ( !v14 )
        {
LABEL_31:
          v9 = v14;
          goto LABEL_8;
        }
        if ( a2 )
          v15 = "Minimum";
        else
          v15 = &byte_1A4198;
        if ( sub_B550C(a1, byte_1C3AA0, v15) > 0 )
        {
          v9 = *(_DWORD *)(a3 + 8);
          if ( v9 )
          {
            if ( sub_12D3A0(a1, *(_DWORD *)(a3 + 8)) <= 0 )
              goto LABEL_43;
          }
          else if ( sub_B6C30(a1, (int)"14 (default)") <= 0 )
          {
            goto LABEL_8;
          }
          sub_B6C30(a1, (int)"\n");
          v14 = sub_B6E94(a1, v6, 128);
          if ( !v14 )
            goto LABEL_31;
          if ( sub_B6C30(a1, (int)"Trailer Field: 0x") > 0 )
          {
            v9 = *(_DWORD *)(a3 + 12);
            if ( !v9 )
            {
              if ( sub_B6C30(a1, (int)"BC (default)") <= 0 )
                goto LABEL_8;
              goto LABEL_37;
            }
            if ( sub_12D3A0(a1, *(_DWORD *)(a3 + 12)) > 0 )
            {
LABEL_37:
              v9 = 1;
              sub_B6C30(a1, (int)"\n");
              goto LABEL_8;
            }
          }
        }
LABEL_43:
        v9 = 0;
        goto LABEL_8;
      }
      return 0;
    }
    else
    {
      return sub_B6C30(a1, (int)"No PSS parameter restrictions\n") > 0;
    }
  }
  else
  {
    if ( a3 )
    {
      if ( sub_B6C30(a1, (int)"\n") <= 0 )
        goto LABEL_7;
      goto LABEL_11;
    }
    return sub_B6C30(a1, (int)"(INVALID PSS PARAMETERS)\n") > 0;
  }
}
