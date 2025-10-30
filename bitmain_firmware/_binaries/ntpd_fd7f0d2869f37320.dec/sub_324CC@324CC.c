int __fastcall sub_324CC(int a1)
{
  int v2; // r1

  sub_266AC(130, a1, (int)"assoc %u", *(unsigned __int16 *)(a1 + 60));
  sub_41594(a1 + 16, 1, 0);
  sub_32358(a1, 0);
  v2 = *(_DWORD *)(a1 + 68);
  ++peer_demobilizations;
  --peer_associations;
  if ( (v2 & 2) != 0 )
    --peer_preempt;
  if ( (v2 & 8) != 0 )
    sub_39E24(a1);
  return sub_31B38((int *)a1, 1);
}
