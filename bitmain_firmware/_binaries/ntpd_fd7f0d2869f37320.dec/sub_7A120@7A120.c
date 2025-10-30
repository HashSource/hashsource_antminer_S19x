// positive sp value has been detected, the output may be wrong!
void __fastcall sub_7A120(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r12
  unsigned int v6; // r1

  if ( v5 == 1114990113 )
  {
    v6 = a2 + *(_DWORD *)(a1 + 12);
    if ( v6 <= *(_DWORD *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 12) = v6;
      __asm { POP             {PC} }
    }
    sub_6FC54((int)"./../lib/isc/buffer.c", 127, 0, "b->used + n <= b->length");
  }
  sub_6FC54(
    (int)"./../lib/isc/buffer.c",
    126,
    0,
    "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
}
