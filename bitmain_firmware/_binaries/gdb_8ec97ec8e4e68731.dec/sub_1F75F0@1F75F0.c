int __fastcall sub_1F75F0(int *a1, int *a2)
{
  int *v3; // [sp+8h] [bp-8h] BYREF
  int *v4; // [sp+Ch] [bp-4h] BYREF

  v4 = a1;
  v3 = a2;
  sub_53274(
    "system-call-allowed",
    -1,
    (int)sub_1F6310,
    (int)"Set if the host system(3) call is allowed for the target.",
    &v4);
  return sub_53274(
           "system-call-allowed",
           -1,
           (int)sub_1F62C0,
           (int)"Show if the host system(3) call is allowed for the target.",
           &v3);
}
