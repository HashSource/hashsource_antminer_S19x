int __fastcall sub_A330C(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v10; // r0

  v4 = sub_A31E8(a1);
  v5 = sub_26BC70(a2);
  if ( sub_9AAB0(v5) )
  {
    v6 = sub_26BC70(v4);
    v7 = sub_A32C8(v6, a2);
  }
  else
  {
    v10 = sub_26BC70(v4);
    v7 = sub_2647C8(v10, a2);
  }
  v8 = sub_25E4EC(v7, v4, 4);
  return sub_2647C8(a1, v8);
}
