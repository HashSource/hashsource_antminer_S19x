int __fastcall sub_21C4C(_DWORD *a1, int a2)
{
  struct timespec v4; // [sp+8h] [bp-Ch] BYREF

  sub_215E0(&v4, (int)&v4, a2, a2 >> 31);
  sub_21754(&v4, a1);
  return sub_21C0C(&v4);
}
