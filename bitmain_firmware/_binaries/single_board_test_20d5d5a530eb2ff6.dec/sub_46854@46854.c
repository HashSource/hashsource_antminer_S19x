int __fastcall sub_46854(float **a1)
{
  size_t v3; // [sp+0h] [bp-5Ch] BYREF
  pthread_attr_t attr; // [sp+4h] [bp-58h] BYREF
  char v5[52]; // [sp+28h] [bp-34h] BYREF

  if ( pthread_attr_init(&attr) )
    fwrite("Error: pthread_attr_init\n", 1u, 0x19u, (FILE *)stderr);
  if ( pthread_attr_getstacksize(&attr, &v3) )
    fwrite("Error: pthread_attr_getstacksize\n", 1u, 0x21u, (FILE *)stderr);
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : =====stack size: %u\n\n", "sw_flush", v3);
  snprintf(byte_644FE4, 0x100u, "=====stack size: %u\n", v3);
  sub_3CCE0((int)byte_644FE4);
  sub_4380C(*a1);
  sub_4581C(a1, *(_DWORD *)(dword_705300 + 8), *(_DWORD *)(dword_705300 + 12));
  return sub_43E5C(*a1, *(_DWORD *)dword_705300);
}
