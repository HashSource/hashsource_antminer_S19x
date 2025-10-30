int __fastcall sub_1F808(int a1)
{
  int v3; // [sp+10h] [bp-14h] BYREF
  int v4; // [sp+14h] [bp-10h] BYREF
  int optval; // [sp+18h] [bp-Ch] BYREF
  int v6; // [sp+1Ch] [bp-8h]

  optval = 1;
  v4 = 45;
  v3 = 30;
  v6 = fcntl(a1, 3, 0);
  fcntl(a1, 4, v6 | 0x800);
  setsockopt(a1, 1, 9, &optval, 4u);
  if ( byte_94310 != 1 )
    fcntl(a1, 2, 1);
  setsockopt(a1, 6, 1, &optval, 4u);
  setsockopt(a1, 6, 6, &optval, 4u);
  setsockopt(a1, 6, 4, &v4, 4u);
  return setsockopt(a1, 6, 5, &v3, 4u);
}
