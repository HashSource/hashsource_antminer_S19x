ssize_t __fastcall sub_3BE90(int a1, size_t a2)
{
  return recv(*(_DWORD *)(a1 + 4), (void *)(a1 + 32), a2, 0);
}
