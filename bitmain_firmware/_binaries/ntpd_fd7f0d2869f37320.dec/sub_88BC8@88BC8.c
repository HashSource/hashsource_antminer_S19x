int __fastcall sub_88BC8(int a1, unsigned __int8 *a2)
{
  int result; // r0

  result = a1 - 1;
  do
    *(_BYTE *)++result = *((_BYTE *)&dword_B9164 + *a2 + 8);
  while ( *a2++ );
  return result;
}
