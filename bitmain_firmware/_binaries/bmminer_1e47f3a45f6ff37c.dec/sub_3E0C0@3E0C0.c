int __fastcall sub_3E0C0(_DWORD *a1)
{
  struct timespec v3; // [sp+0h] [bp-8h] BYREF

  sub_3DD40(&v3);
  sub_3DDFC(&v3.tv_sec, a1);
  return sub_3CF38(&v3);
}
