// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterWidget.h"
#include "Components/ProgressBar.h"
#include "Character/LoglikeCharacter.h"
#include "Components/TextBlock.h"
#include "GameFramework/Pawn.h"

//캐릭터와 연결할 함수
void UABCharacterWidget::BindCharacter(ALoglikeCharacter* LoglikeCharacter)
{
	CurrentCharacter = LoglikeCharacter;
	//LoglikeCharacter->OnHPChanged.AddUObject(this, &UABCharacterWidget::UpdateHPWidget);
}

//AddToViewport 시 호출되는 함수
void UABCharacterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	//만든 UI에서 PB_HPBar 에 해당하는 이름의 프로그래스바 객체를 선언(프로그래스바와 연결)
	HPProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_HPBar")));
	//UpdateHPWidget();
}

//HP 위젯 업데이트 함수 (흠 어쩔까...)
void UABCharacterWidget::UpdateHPWidget()
{
	//if (CurrentCharacter->IsValidLowLevel())
	//	if (nullptr != HPProgressBar)
	//		//연결된 프로그래스바에 SetPercent 함수로 게이지를 변경
	//		HPProgressBar->SetPercent(1 - CurrentCharacter->GetHPRatio());
}
