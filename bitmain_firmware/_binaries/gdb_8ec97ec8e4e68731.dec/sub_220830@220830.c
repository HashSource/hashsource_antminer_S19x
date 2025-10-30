_BYTE *__fastcall sub_220830(void *a1)
{
  _BYTE *result; // r0

  result = memset(a1, 0, 0x30u);
  result[33] = 1;
  *((_WORD *)result + 11) = -1;
  return result;
}
