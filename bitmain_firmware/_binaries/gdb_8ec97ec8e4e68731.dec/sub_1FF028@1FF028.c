int __fastcall sub_1FF028(int a1)
{
  int v1; // r5
  int v3; // r0
  const char *v4; // r0
  const char *v5; // [sp+4h] [bp-8h] BYREF

  v5 = 0;
  if ( !sub_20DB74(a1) )
    sub_946E0("No default function now.");
  v1 = sub_20DB9C();
  if ( !sub_C37B8(v1, &v5, 0, 0) )
  {
    v3 = sub_B894C(0);
    v4 = (const char *)sub_25AC8C(v3, v1);
    sub_946E0("No function found containing current program point %s.", v4);
  }
  return sub_1FEEA8(v5);
}
