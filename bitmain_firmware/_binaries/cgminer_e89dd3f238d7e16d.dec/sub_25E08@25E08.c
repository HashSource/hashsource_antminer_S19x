bool __fastcall sub_25E08(int a1, int a2)
{
  int v3; // r0
  size_t v4; // r0
  char v8[12]; // [sp+8h] [bp-200Ch] BYREF
  int v9; // [sp+2008h] [bp-Ch]

  if ( !sub_652F0(a2, "id") )
    return 0;
  v3 = sub_652F0(a2, "id");
  v9 = sub_66FB0(v3);
  sprintf(v8, "{\"id\": %d, \"result\": \"cgminer/1.0.0\", \"error\": null}", v9);
  v4 = strlen(v8);
  return sub_2248C(a1, v8, v4);
}
