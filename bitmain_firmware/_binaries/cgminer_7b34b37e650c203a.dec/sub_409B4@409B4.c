int __fastcall sub_409B4(
        const char *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        const char *a7)
{
  const char *v8[8]; // [sp+4h] [bp-20h] BYREF

  v8[1] = a2;
  v8[0] = a1;
  v8[2] = a3;
  v8[3] = a4;
  v8[4] = a5;
  v8[5] = a6;
  v8[6] = a7;
  sub_4066C(v8);
  return sub_407E0((int *)v8);
}
