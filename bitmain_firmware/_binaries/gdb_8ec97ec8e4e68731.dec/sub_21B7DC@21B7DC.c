int __fastcall sub_21B7DC(_BYTE *a1)
{
  if ( (a1[20] & 0x1F) == 0xE )
    return *(_DWORD *)a1;
  else
    return sub_21B3C4((int)a1);
}
