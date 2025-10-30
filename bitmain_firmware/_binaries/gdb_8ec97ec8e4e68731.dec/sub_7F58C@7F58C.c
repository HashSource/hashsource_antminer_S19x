int __fastcall sub_7F58C(int a1)
{
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  obstack_begin((struct obstack *)(a1 + 8), 0, 0, (void *(*)(int))sub_93028, sub_7B664);
  return a1;
}
