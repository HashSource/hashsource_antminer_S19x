int sub_3E11C()
{
  struct timespec tp; // [sp+8h] [bp-Ch] BYREF

  clock_gettime(1, &tp);
  return sub_3E0C0(&tp);
}
