//p52
//파일명: staff.mjs
// =========================================
// 다른 모듈에서 사용할 모듈을 내보내기
exprot const baker = {
	bake(item) {
		console.log( 'Woo! I just baked ${item}' );
	}
};


// 파일명: cakeFactory.mjs
// =========================================
// 의존 모듈 가져오기
import baker item "/modules/staff.mjs";

export const oven = {
	makeCupcake(toppings) {
		baker.bake( "cupcake", toppings );
	},
	makeMuffin(mSize) {
		baker.bake( "muffin", size );
	}
}
// 파일명: bakery.mjs
// =========================================
import {cakeFactory} from "/modules/cakeFactory.mjs";
cakeFactory.oven.makeCupcake( "sprinkles" );
cakeFactory.oven.makeMuffin( "large" );

// p73
// 방법 1: 리터럴 표기법을 사용하여 빈 객체 생성
const newObject = {};

// 방법 2: Object.create() 메서드를 사용하여 빈 객체 생성
const newObject = Object.create(Object.prototype);
// 방법 3: new 키워드를 사용하여 빈 객체 생성
const newObject = new Object();

// 상속받은 속성 값을 가져옵니다.
console.log(driver.dateOfBirth);
//할당한 속성 값을 가져옵니다.
console.log(driver.topSpeed);

//p76
class Car {
	constructor(model, year, miles) {
		this.model = model;
		this.year = year;
		this.miles = miles;
	}

	toString() {
		return `${this.model} has done ${this.miles} miles`;
	}
}

//사용법:

//새로운 Car 인스턴스 생성
let civic = new Car('Honda Civic', 2009, 20000);
let mondeo = new Car('Ford Mondeo', 2010, 5000);

//브라우저 콘솔을 열어서 결과를 확인합니다.
console.log(civic.toString());
console.log(mondeo.toString());

