char *sub_255610()
{
  char *v0; // r5

  v0 = (char *)sub_93028(0x30u);
  *(_DWORD *)v0 = sub_323AE0(10, sub_255280, sub_255274, 0, sub_93094, 2445928);
  obstack_begin((struct obstack *)(v0 + 4), 0, 0, (void *(*)(int))sub_93028, sub_255268);
  return v0;
}
