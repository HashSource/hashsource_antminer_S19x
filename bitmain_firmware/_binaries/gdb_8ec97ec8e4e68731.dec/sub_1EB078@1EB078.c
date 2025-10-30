int __fastcall sub_1EB078(int a1)
{
  int v1; // r0
  int v2; // r0
  const char **v3; // r4
  char *v4; // r5
  size_t *v5; // r6
  size_t v6; // r0
  int v7; // r0
  const char *v8; // r9
  int v9; // r2
  bool v10; // cc
  int v11; // r5
  int v12; // r2
  bool v13; // cc
  _DWORD *v14; // r0
  signed int v15; // r0

  v1 = sub_16F654(a1);
  v2 = ((int (__fastcall *)(int))loc_1E2770)(v1);
  v3 = (const char **)dword_488C94;
  v5 = (size_t *)(dword_488C94 + 4);
  v4 = *(char **)dword_488C94;
  v6 = sub_1E2890(v2);
  sub_93170(v4, v6, "g");
  sub_1E7DEC(*v3);
  v7 = sub_1E4EB8((char **)v3, v5, 0, 0, 0);
  v8 = *v3;
  v9 = *(unsigned __int8 *)*v3;
  if ( v9 == 69 )
    sub_946E0("Remote failure reply: %s", *v3);
  v10 = (unsigned int)(v9 - 48) > 9;
  if ( (unsigned int)(v9 - 48) > 9 )
    v10 = (v9 & 0xFFFFFFDF) - 65 > 5;
  v11 = !v10;
  if ( v10 && v9 != 120 )
  {
    do
    {
      if ( dword_48A590 )
      {
        v14 = (_DWORD *)sub_242FC8(v7);
        sub_2594B0(*v14, "Bad register packet; fetching a new packet\n");
      }
      v7 = sub_1E4EB8((char **)v3, v5, 0, 0, (_DWORD *)v11);
      v8 = *v3;
      v12 = *(unsigned __int8 *)*v3;
      v13 = (unsigned int)(v12 - 48) > 9;
      if ( (unsigned int)(v12 - 48) > 9 )
        v13 = (v12 & 0xFFFFFFDF) - 65 > 5;
    }
    while ( v13 && v12 != 120 );
  }
  v15 = strlen(v8);
  if ( (v15 & 1) != 0 )
    sub_946E0("Remote 'g' packet reply is of odd length: %s", v8);
  return v15 >> 1;
}
