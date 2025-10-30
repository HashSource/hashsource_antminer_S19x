char *__fastcall sub_27F158(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  size_t v4; // r0
  char *v5; // r0
  char *v6; // r7
  int v7; // r0
  int v8; // r0
  int v9; // r0
  size_t v10; // r0
  char *v11; // r0

  if ( dword_48B6B8 )
    sub_291120(dword_48B6B8);
  v2 = sub_297918();
  LOWORD(v3) = (unsigned __int16)&dword_48B6E0;
  if ( !v2 )
  {
    HIWORD(v3) = (unsigned int)&dword_48B6E0 >> 16;
    goto LABEL_7;
  }
  HIWORD(v3) = (unsigned int)&dword_48B6E0 >> 16;
  if ( *v3 )
  {
    v4 = strlen((const char *)dword_48AAC4);
    v5 = (char *)sub_93028(v4 + 1);
    v6 = strcpy(v5, (const char *)dword_48AAC4);
    v7 = sub_29283C(1, 0);
    v8 = sub_2978A8(v7);
    v9 = sub_297D10(v8, dword_48AAC4, 0);
    sub_2971BC(v9);
    strcpy((char *)dword_48AAC4, v6);
    v2 = sub_297758(v6);
LABEL_7:
    if ( !dword_48AAC8 )
      goto LABEL_8;
    goto LABEL_13;
  }
  if ( !dword_48AAC8 )
    goto LABEL_10;
LABEL_13:
  sub_2973BC(v2);
LABEL_8:
  if ( *v3 )
    sub_2923B8();
LABEL_10:
  sub_2976FC(1, 0);
  if ( a1 )
    return 0;
  v10 = strlen((const char *)dword_48AAC4);
  v11 = (char *)sub_93028(v10 + 1);
  return strcpy(v11, (const char *)dword_48AAC4);
}
