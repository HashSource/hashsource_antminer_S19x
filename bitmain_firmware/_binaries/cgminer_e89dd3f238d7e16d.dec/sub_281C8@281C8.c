int __fastcall sub_281C8(int a1)
{
  int v3; // [sp+Ch] [bp-8h]

  v3 = fcntl(a1, 3, 0);
  return fcntl(a1, 4, v3 & 0xFFFFF7FF);
}
