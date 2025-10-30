int __fastcall sub_46108(int *a1)
{
  _BYTE buf[5]; // [sp+7h] [bp-5h] BYREF

  if ( read(*a1, buf, 1u) == 1 )
    return buf[0];
  else
    return -1;
}
