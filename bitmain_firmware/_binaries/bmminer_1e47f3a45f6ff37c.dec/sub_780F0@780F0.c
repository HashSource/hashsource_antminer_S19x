void __fastcall sub_780F0(_DWORD *a1)
{
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        sub_75F68(a1);
        break;
      case 1:
        sub_76AB8((int)a1);
        break;
      case 2:
        sub_77A20((void **)a1);
        break;
      case 3:
        sub_77D44(a1);
        break;
      case 4:
        sub_77F50(a1);
        break;
      default:
        return;
    }
  }
}
