bool __fastcall sub_50E8C(int a1, int *a2, int a3)
{
  int v6; // r0
  int v8; // [sp+4h] [bp-8h] BYREF

  dword_9CD918 = *a2;
  v8 = 0;
  do
    v6 = sub_50FFC(a1, a2, &v8, a3);
  while ( v6 == 1 );
  return v6 == 0;
}
