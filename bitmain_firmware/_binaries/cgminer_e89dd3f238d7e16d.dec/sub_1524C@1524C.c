void *__fastcall sub_1524C(int a1, char a2, int a3, const char *a4)
{
  void *result; // r0
  const char *v5; // r3
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char s[48]; // [sp+14h] [bp-40h] BYREF
  char v17[4]; // [sp+44h] [bp-10h] BYREF
  int v18; // [sp+48h] [bp-Ch]
  int v19; // [sp+4Ch] [bp-8h]

  v19 = 0;
  v18 = 0;
  *(_WORD *)v17 = 0;
  result = memset(s, 0, sizeof(s));
  if ( a1 && a4 )
  {
    v19 = sub_65D18(result);
    v18 = sub_651D4(v19);
    if ( a2 )
      v5 = "S";
    else
      v5 = "E";
    snprintf(v17, 2u, "%s", v5);
    v6 = sub_66A38(v17);
    sub_65420(v18, "STATUS", v6);
    v7 = sub_66F54(dword_865BC, dword_865BC >> 31);
    sub_65420(v18, "When", v7);
    v8 = sub_66F54(a3, a3 >> 31);
    sub_65420(v18, "Code", v8);
    if ( a3 == 7 )
      snprintf(s, 0x30u, a4, dword_90E90);
    else
      snprintf(s, 0x30u, "%s", a4);
    v9 = sub_66A38(s);
    sub_65420(v18, "Msg", v9);
    v10 = sub_66A38(off_85AA8);
    sub_65420(v18, "Description", v10);
    sub_661B4(v19, v18);
    result = (void *)sub_65420(a1, "STATUS", v19);
    if ( a2 != 1 )
    {
      v11 = sub_66F54(1, 0);
      return (void *)sub_65420(a1, "id", v11);
    }
  }
  return result;
}
