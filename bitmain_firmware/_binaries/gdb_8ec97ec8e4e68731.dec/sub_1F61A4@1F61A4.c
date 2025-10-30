int __fastcall sub_1F61A4(int a1, int a2)
{
  int v4; // r0
  int v5; // r3
  int v6; // r6
  size_t v7; // r0
  size_t v8; // r0
  bool v9; // zf
  char *v10; // r3
  char v12[32]; // [sp+0h] [bp-20h] BYREF

  v4 = sub_1580C0();
  v5 = 70;
  *(_WORD *)v12 = 70;
  if ( a1 < 0 )
    v5 = (int)&word_3C1464;
  v6 = v4;
  if ( a1 < 0 )
  {
    a1 = -a1;
    *(_WORD *)&v12[1] = *(_WORD *)v5;
  }
  v7 = strlen(v12);
  sprintf(&v12[v7], "%x", a1);
  if ( v6 | a2 )
  {
    v8 = strlen(v12);
    v9 = a2 == 0;
    if ( a2 )
      v9 = v6 == 0;
    v10 = &v12[v8];
    if ( !v9 )
    {
      sprintf(&v12[v8], ",%x", 4);
LABEL_10:
      strcat(v12, ",C");
      goto LABEL_11;
    }
    if ( a2 < 0 )
    {
      a2 = -a2;
      v10 = &v12[v8 + 1];
      *(_WORD *)&v12[v8] = 45;
    }
    sprintf(v10, ",%x", a2);
    if ( v6 )
      goto LABEL_10;
  }
LABEL_11:
  off_46D458 = (int (*)())dword_489344;
  return sub_1E7DEC(v12);
}
