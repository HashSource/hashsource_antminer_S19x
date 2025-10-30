__int64 __fastcall config_item_get(__int64 a1)
{
  unsigned int v8; // w0
  signed int v9; // w0

  if ( a1 )
  {
    _X2 = (unsigned int *)(a1 + 28);
    __asm { PRFM            #0x11, [X2] }
    do
    {
      v8 = __ldxr(_X2);
      v9 = v8 + 1;
    }
    while ( __stlxr(v9, _X2) );
    __dmb(0xBu);
    if ( v9 <= 1 && !byte_6F50 )
    {
      byte_6F50 = 1;
      __break(0x800u);
    }
  }
  return a1;
}
